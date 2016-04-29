# _**Portfolio: Joe Karasek**_
### Drupal Week Two Code Review, Drupal Basics
#### _**By Joseph Karasek, 04.28.2016**_
---
## Description

_This Drupal 7 based portfolio was put together as a learning exercise during the Epicodus Level 3 Drupal course. The portfolio is intended to showcase information about Joe, including projects he's worked on and custom modules that he has built for Drupal. The site also includes a contact form and about page._

_This site was built using [Drupal 7.43](https://www.drupal.org/drupal-7.43-release-notes)._

_This site also uses a [custom built Gulp.js tool](https://github.com/joekarasek/toolkit-drupal7-gulp) to assist with custom module development._

#### _Code Review Criteria_

* _It should present a custom form with 3 text inputs. We want you to use text inputs rather than radio buttons or menus so that you can practice validation._
* _One input should be a shift value, one should be a direction, and the third should be the phrase to be encrypted._
* _Then you should redirect to a second page to show the result - the encoded phrase. Here are a couple examples of input and output._
* _The shift value is the number of places to shift each letter over._
* _If the shift direction is "right" then you will add the shift value. For example: "a" with a shift value of 1 and a direction of right would become "b". A shift direction of "left" with a shift value of 1 would turn "b" into "a"._
* _If the shift amount takes you over the bounds of the alphabet then cycle back to the beginning. For example: a shift value of 3 with the direction of right would turn "z" into "c"._
* _Any spaces or punctuation in the input phrase should be ignored and reproduced in the final result without being shifted._
* _Your final result should be in all lowercase._
* _Be sure to validate all input before calculating the result. Here are the validation rules:_
* _The shift value must be a positive integer_
* _The shift direction must be either "left" or "right"._
* _The only special characters that should be allowed in your input phrase are spaces and punctuation._
* _Don't forget your Git commits and include a README in your GitHub repository!_

___
## Installation/Setup

### Prerequisites

_This installation assumes you will use the MAMP stack to deploy this site. You will need the following things properly installed on your computer._

* [Git](http://git-scm.com/)
* [MAMP](https://www.mamp.info/en/)


### Setting up the database

1. Launch MAMP.
2. Change `MAMP>Preferences>Web Server>Document Root` to point at the root directory of this directory.
3. Open the 'Webstart Page' through MAMP _or_ go to 'http://localhost:8888/MAMP/?language=English'
4. Open myPhpAdmin
5. Import the project's database from the `./sites/db-backup/`
6. Make sure you have a database user with user/password matching the info below (if its not included, you probably shouldn't have access to the database ;p )

### Viewing the site

_With MAMP running and the database setup, you should be able to view the site at `localhost:8888`._

---
## User Roles

_The following user names and passwords can be used to access the site's databse, administration, and book reviewer roles..._


#### Database administration
* Name: admin
* Password: admin

#### Site administration
* Name: admin
* Password: admin

---
## Misc.

### Known Bugs

_No known bugs at this time._

### Support and contact details

_If you have any questions, concerns, or feedback, please contact the authors through_ [gitHub](https://github.com/joekarasek/).

### License

MIT License.

Copyright (c) 2016 **_Joseph Karasek_**
