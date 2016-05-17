# _**Portfolio: Joe Karasek**_
### Drupal Week Four Code Review, Drupal Basics
#### _**By Joseph Karasek, 05.15.2016**_
---
## Description

_This Drupal 7 based portfolio was put together as a learning exercise during the Epicodus Level 3 Drupal course. The portfolio is intended to showcase information about Joe, including projects he's worked on and custom modules that he has built for Drupal. The site also includes a contact form and about page._

_This site was built using [Drupal 7.43](https://www.drupal.org/drupal-7.43-release-notes)._

_This site also uses a [custom built Gulp.js tool](https://github.com/joekarasek/toolkit-drupal7-gulp) to assist with custom module and theme development._

#### _Code Review Objectives_

* _Create a View to display inside of a block on your front page_
* _Make the View display an unformatted list of linked titles for your choice of content: articles, or your site's custom content type._
* _Ajax enable the links in your view._
* _Create a block with a wrapper div in it to display whichever title you've clicked on in your view using ajax._
* _Create a custom module to handle the ajax calls and load the content into the div._
* _Create a custom module which presents a form where the user can enter in one half of their DNA helix. Your module should generate the other half and print both sides on the browser._
* _Start with unit tests, and start with simple input output pairs. Then write the module and include a functional test to make sure the whole interface works._
* _Remember to validate the input. You should only allow your user to type in the letters A, T, C,_ G.

#### _Code Review Criteria_

* _Did you create an Ajax enabled View showing the correct content?_
* _Did you create a custom module solving the given problem, validating user input and including unit tests and at least one functional test?_
* _Is the code clean and well organized?_
* _Are you able to discuss the flow of your code and the concepts behind it with an instructor using correct terminology?_
* _Did you export your database at the end of your project and include it with your modules in your repository with login information in a clear readme?_
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

_**Alternately** you can use gulp to launch the site. See the readme [here](https://github.com/joekarasek/toolkit-drupal7-gulp)._

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
