#/bin/bash

function download_gsl()
{
  if [[ ! -e ${gsl_zip_file} ]]; then
    echo "Downloading Guidelines Support Library (GSL)..."
    wget -q https://github.com/microsoft/GSL/archive/refs/tags/${gsl_zip_file}
  fi
}

function gsl_exists()
{
  [[ -d ${gsl_dir} ]]
}

function zip_file_exists()
{
  [[ -d ${gsl_zip_file} ]]
}

function remove_gsl_zip_file()
{
  rm ${gsl_zip_file}
}

function remove_gsl_dir()
{
  rm -r ${gsl_dir}
}

function to_replace()
{
  local replace=1
  echo -n "Replace (Y/N)?: "
  read -n 1 ANS
  echo
  if [[ $ANS == 'Y' || $ANS == 'y' ]]; then
    replace=0
  fi
  return ${replace}
}
 
function expand_gsl()
{
  if [[ ! -d ${gsl_dir} ]]; then
    echo "Expanding..."
    unzip -q ${gsl_zip}
  fi
}

function show_help()
{
  echo "Sets up the GSL (Guidelines Support Library)."
  show_usage
}
 
function show_usage()
{
  echo "Usage:" $(basename $0)" [-h]"
  echo
  echo "   -h, show help message"
}

function try_remove_zip_file()
{
  if zip_file_exists; then
      remove_gsl_zip_file
  fi
}

function try_remove_gls_dir()
{
  if gsl_exists; then
      remove_gsl_dir
  fi
}

function parse_args()
{
  if [[ $# -gt 1 ]]; then
    show_usage
    exit 1
  fi
  
  if [[ $# == 1 ]]; then
    if [[ $1 != '-h' ]]; then
      echo "Unknown option: $1"
      show_usage
      exit 1
    elif [[ $1 == '-h' ]]; then
      show_help
      exit 0
    fi
  fi
}

function init()
{
  ver=4.0.0
  gsl_zip=v${ver}
  gsl_zip_file=${gsl_zip}.zip
  gsl_dir=GSL-${ver}
}

init
parse_args "$@"

try_remove_gls_dir
try_remove_zip_file

echo "Downloading GSL zip..." 
download_gsl
expand_gsl
echo "Done."
