#!/bin/sh

class_name=$1
dest_dir=$2

cp Template.cpp $class_name.cpp
cp Template.hpp $class_name.hpp

sed -i '.bak' 's/Template/'$class_name'/g' $class_name.cpp
rm $class_name.cpp.bak
sed -i '.bak' 's/Template/'$class_name'/g' $class_name.hpp
rm $class_name.hpp.bak

upped=`echo $class_name | tr '[a-z]' '[A-Z]' `
sed -i '.bak' 's/TEMPLATE/'$upped'/g' $class_name.cpp
rm $class_name.cpp.bak
sed -i '.bak' 's/TEMPLATE/'$upped'/g' $class_name.hpp
rm $class_name.hpp.bak

mv $class_name.cpp $dest_dir
mv $class_name.hpp $dest_dir

# ! shoutout to Excalibur for this amazing script
# ? Usage: ./ClassGenerator.sh <class_name> <dest_dir>
