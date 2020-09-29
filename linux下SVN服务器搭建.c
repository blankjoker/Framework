1.登录云服务器，安装SVN								
sudo apt -y install subversion	

2.查看安装SVN是否成功								
svnserve --version	

3.创建SVN库								
mkdir -p /SVN/repos/zhang								
svnadmin create /SVN/repos/zhang	//创建版本库							
cd /SVN/repos/zhang		//进入到版本库	

4.目录下回生成一些配置文件，进行文件配置，配置文件都在conf目录下，主要对passwd/authz/svnserve.conf文件进行配置								
cd conf								
(1)配置passwd								
vim passwd								
[users]
# harry = harryssecret
# sally = sallyssecret
zhangkunliang = 19961123
zhangzhuliang = 19921120

(2)配置authz
[groups]
# harry_and_sally = harry,sally
# harry_sally_and_joe = harry,sally,&joe
admin = zhangkunliang
other = zhangzhuliang

[/]
@admin = rw
@other = r
* = r

(3)配置svnserve.conf
anon-access = read
auth-access = write
password-db = passwd
authz-db = authz

(4)启动SVN
killall svnserve
svnserve -d -r /svn/repos/kun

(5)看svn端口号
netstat -tanlp | grep svn

(6)本地checkout
svn://IPaddress:3690

PS：注意事项，阿里云服务器的话，需要配置网络端口，开启3690端口。不然本地无法访问云服务器。
