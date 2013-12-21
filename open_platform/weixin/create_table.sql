create table weixin_test(
	id bigint unsigned not null auto_increment primary key,
	to_user varchar(32) not null default 'default',
	from_user varchar(255) not null default 'default',
	create_time int unsigned not null default 0,
	content text 
)engine=myisam default charset = utf8;