# c++ simple api

C++ Notes App Server with Crow as the web framework and MySQL as the database.

# libraries

```bash
sudo apt update
sudo apt install libmysqlcppconn-dev libboost-all-dev
```

or

```bash

sudo apt install libasio-dev

git clone https://github.com/CrowCpp/Crow.git
cd Crow
mkdir build
cd build
cmake ..
make -j$(nproc)
sudo make install

```
