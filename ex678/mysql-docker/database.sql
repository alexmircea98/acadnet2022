set character_set_client='utf8';
set character_set_connection='utf8';
set character_set_database='utf8';
set character_set_results='utf8';
set character_set_server='utf8';

CREATE TABLE users (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100),
    password VARCHAR(50),
    fullname VARCHAR(100)
) DEFAULT CHARACTER SET utf8 COLLATE utf8_general_ci;

CREATE TABLE entries (
    id INT PRIMARY KEY AUTO_INCREMENT, 
    `date` DATETIME,
    user_id INT,
    message TEXT
) DEFAULT CHARACTER SET utf8 COLLATE utf8_general_ci;

INSERT INTO users (id, name, password, fullname) VALUES
    (1, 'admin', '1337_pass', 'The Boss'),
    (2, 'mrlaziz', 'doarkebabushishaorma', 'Mr. Laziz'),
    (3, 'tzancauraganu', 'p4z3akvinehuraganumankateash', 'Andrei Velcu'),
    (4, 'scl1p1k1', 'fl00dladusmani', 'Sclipici'),
    (5, 'badwoop', 'w00pwOOp', 'Badboi');

INSERT INTO entries (`date`, `user_id`, `message`) VALUES
    ("2022-05-05 09:45", 1, 'We need to plan!<br /><br /><img src="/images/carrot.jpg" width="800" />'),
    ("2022-05-05 12:05", 1, 'Here is one of our experts launching attacks on our enemies!<br />CTF_ACAD{Space_is_the_final_frontier}<br /><img src="/images/expert.jpg" width="800" />'),
    ("2022-05-05 15:13", 5, '<h4>We need to be vigilent! </h4><img src="/images/hahajoke.jpg" width="800" />'),
    ("2022-05-06 01:05", 2, 'My cousin got lost in space during a secret mission. Can we help him??!! <br /><br /><img src="/images/lost.jpg" width="800" />'),
    ("2022-05-06 02:10", 4, '<br />I''m on it!! Let''s gooo!!!<br /><img src="/images/rocket.jpg" width="800" />');


