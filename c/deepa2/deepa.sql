create  table dee(dname varchar(20), dage int)
insert into dee values('Silford',23)
insert into dee values('Rovina',24)
insert into dee values('Deepa',25)
insert into dee values('Parijat',26)
select * from dee
select * from dee where dname like 'D%'
select * from dee where dname like 'D_ _p%'
select * from dee where dname like 'Par_j_t%'
select count(*) from dee
select count(dage) from dee
select dage +22 from dee
select dage -22 from dee
select dage *22 from dee
select dage -22 from dee
select upper(dname) as "fname" from dee
select upper(dname) from dee
select upper(fname) as "dname" from dee
select * from dee
select (dname) as "fname" from dee
select * from dee

create table dee1(rno int unique, sname varchar(20))
insert into dee1 values(1001,'Deepa')
insert into dee1 values(1002,'Kiran')
insert into dee1 values(1003,'Diya')
select * from dee1

