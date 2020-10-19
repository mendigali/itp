CREATE TABLE shipping_service(
	service_id DECIMAL(12) PRIMARY KEY NOT NULL,
	name VARCHAR(32) NOT NULL
);
CREATE TABLE Package(
	package_id DECIMAL(12) PRIMARY KEY NOT NULL,
	description VARCHAR(255) NOT NULL,
	date_delivered DATE NOT NULL,
	shipping_id DECIMAL(12) NOT NULL,
	CONSTRAINT FK_shipping_service
	FOREIGN KEY (shipping_id)
	REFERENCES shipping_service(service_id)
);
INSERT INTO shipping_service
	(service_id, name)
VALUES 
	('1', 'Kazpost'),
	('2', 'FedEx'),
	('3', 'DHL'),
	('4', 'Evergreen Line'),
	('5', 'Sakhalin Shipping');
INSERT INTO Package
	(package_id, 
	 description,
	 date_delivered,
	 shipping_id)
VALUES
	('1', 'iPhone 12', '2020-03-03', '5'),
	('2', 'Nvidia RTX 3090', '2020-09-23', '3'),
	('3', 'AirPods Pro', '2020-06-15', '1'),
	('4', 'Lenovo Thinkpad', '2019-11-07', '2'),
	('5', 'PS5', '2020-11-12', '4');



ALTER TABLE package RENAME TO package_new;
ALTER TABLE shipping_service RENAME TO shipping_services;

ALTER TABLE package_new ADD COLUMN status INT;



ALTER TABLE package_new ALTER COLUMN status SET DATA TYPE VARCHAR;

DROP TABLE package;



CREATE TABLE Employee(
    employee_id INTEGER,
    name CHARACTER VARYING(32),
    address CHARACTER VARYING(255),
    marital_status CHARACTER VARYING(62)
);
INSERT INTO Employee
    (employee_id,
     name,
     address,
     marital_status)
VALUES
    ('101', 'test1', 'address1', 'married'),
    ('102', 'test2', 'address2', 'married'),
    ('103', 'test3', 'address3', 'single'),
    ('104', 'test4', 'address4', 'divorced');

ALTER TABLE Employee ADD CONSTRAINT PK_employee PRIMARY KEY(employee_id);

ALTER TABLE Employee ADD COLUMN gender INT;

ALTER TABLE Employee DROP COLUMN address;

DROP TABLE Employee;



CREATE TABLE employee(
    employee_id INT,
    name CHARACTER VARYING(50),
    address CHARACTER VARYING(50),
    working_period_start DATE,
    working_period_end DATE,
    position_id INT
);
CREATE TABLE PositionSalary(
    position_salary_id INT,
    position_name CHARACTER VARYING(50),
    salary_min INT,
    salary_max INT
);

INSERT INTO PositionSalary
    (position_salary_id,
     position_name,
     salary_min,
     salary_max)
VALUES
    ('1', 'Teacher', '100000', '300000'),
    ('2', 'Backend developer', '200000', '500000'),
    ('3', 'Frontend developer', '150000', '450000'),
    ('4', 'Project manager', '250000', '550000'),
    ('5', 'Chief', '160000', '500000');
INSERT INTO Employee
    (employee_id,
     name,
     address,
     working_period_start,
     working_period_end,
     position_id)
VALUES 
    ('1', 'Gerald Shepherd', '11 Sunset St Warrensburg, New York', '2018-07-12', '2019-09-17', '1'),
    ('2', 'Abbott Sharp', '15204 Kenton Ave Oak Forest, Illinois', '2013-01-14', '2020-10-18', '5'),
    ('3', 'Madge Mcdaniel', '916 Colony Ave Ahoskie, North Carolina', '2020-03-18', '2020-09-20', '4'),
    ('4', 'Bud Presley', '2980 5th St Twin Lake, Michigan', '2016-07-25', '2020-10-18', '3'),
    ('5', 'Calvin Lindsey', '1370 Apple Grove Rd Somerville, Alabama', '2019-12-16', '2020-10-18', '2');

ALTER TABLE Employee ADD CONSTRAINT PK_employee PRIMARY KEY(employee_id);
ALTER TABLE PositionSalary ADD CONSTRAINT PK_position_salary PRIMARY KEY(position_salary_id);

ALTER TABLE Employee ADD CONSTRAINT FK_position FOREIGN KEY(position_id) REFERENCES PositionSalary(position_salary_id);

ALTER TABLE PositionSalary RENAME TO EmployeePositions;

ALTER TABLE employee ALTER employee_id SET NOT NULL;
ALTER TABLE employee ALTER name SET NOT NULL;
ALTER TABLE employee ALTER address SET NOT NULL;
ALTER TABLE employee ALTER working_period_start SET NOT NULL;
ALTER TABLE employee ALTER working_period_end SET NOT NULL;
ALTER TABLE employee ALTER position_id SET NOT NULL;
ALTER TABLE employeepositions ALTER position_salary_id SET NOT NULL;
ALTER TABLE employeepositions ALTER position_name SET NOT NULL;
ALTER TABLE employeepositions ALTER salary_min SET NOT NULL;
ALTER TABLE employeepositions ALTER salary_max SET NOT NULL;



DROP TABLE employee;
DROP TABLE employeepositions;