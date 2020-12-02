git 设置和取消代理
设置：
git config --global http.proxy 'socks5://127.0.0.1:1080'
git config --global https.proxy 'socks5://127.0.0.1:1080'

取消：
git config --global --unset http.proxy
git config --global --unset https.proxy

global 即是读/写当前用户全局的配置文件(~/.gitconfig 文件，属于某个计算机用户)
system 即是读写系统全局的配置文件(/etc/gitconfig 文件，属于计算机)
local 即是当前 clone 仓库 的配置文件(位于 clone 仓库下 .git/config)。

windows更新git方法：
git update-git-for-windows

git设置用户和邮箱：
git config --global user.name "username"
git config --global user.email "useremail"
