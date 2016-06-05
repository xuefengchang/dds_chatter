### 1. open splice dds configuration
* download
http://www.prismtech.com/dds-community/software-downloads
* install
```
tar -xzf OpenSpliceDDSV6.4.140407OSS-HDE-x86_64.linux-gcc4.6-glibc2.15-installer.tar.gz
sed -i "s|@@INSTALLDIR@@|$PWD|g" /home/username/HDE/x86_64.linux/release.com
echo $PWD
cat HDE/x86_64.linux/release.com
echo  "source /home/username/HDE/x86_64.linux/release.com" >> ~/.bashrc
```
 
### 2. build and run dds_chatter
* bulid
```
cd dds_chatetr/build
cmake ..
make
```
* run
```
cd dds_chatetr/bin
```
in terminal 1: 
```
 ./messageboard 
```
in terminal 2: 
```
 ./userload
```
in terminal 3: 
```
./chatter
```
