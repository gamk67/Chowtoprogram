# HTML slides for "C How to program"

These are the HTML slides I used to teach an introductory course on C programming,
based on the book "C how to program" by Deitel. The framework was inspired by an
early version of Google Slides. Based on teaching materials and code examples included with
the book, used and distributed with permission from the publisher.

Perhaps this is useful to someone. I am not developing this further since I am now retired.

### Rationale

I was never a big fan of Powerpoint, and teaching a programming language using
PP has all sorts of disadvantages. Using HTML5 and Javascript allows you to do things
that are otherwise difficult or impossible to do:

 * Being able to scroll pages
 * Having tabs to switch quickly between program and output
 * Zoom in on emphasized text
 * Use of popup windows to provide detailed explanations about the code
 * Allow students to take notes on a per page basis and store them
 * Javascript routines for things like animation of sorting algorithms
 * Have a dashboard to access common funtions


### Use

The project was developed under Firefox, and appears to run fine under Chrome.
These are the main controls:

 * left and right arrows for previous and next slide. There is also an index slide near the start. If you hold an arrow key down it shows the page numbers only, for quick traversal
 * F11 for fullscreen mode
 * Crtl+ and Ctrl- to change the slide size
 * N to show extra notes on code slides. Press N again to remove
 * H pops up a help screen
 * T pops up a text window to take notes. Hitting T again saves and closes. Notes are saved in the local profile folder, so are not accessible on other machines
 * There is also a dashboard at the bottom of the screen - hover over it to make it visible
 * Code examples often have some text with yellow markup. Clicking on this will zoom in on it. Click again to zoom out.

### Development

The "generate" script collects all the required files together into a single file called "presentation.html". Most of the required files are in the tmp/ folder. To add a page to the presentation, place a new file in tmp/ so that

 * the file name makes it appear alphabetically in the right place
 * the ID of the first DIV on the new page fits alphabetically between the ID of the previous slide and the next slide 

Then run the "generate" script.

When distributing, you can leave out the tmp/ folder, but the other folders must be included because "presentation.html" depends on them.

### Contact

I am now retired, so the contact information on the fifth slide is no longer valid.
Please contact me via my private email adress, _albert.koelmans@blueyonder.co.uk_. If you find errors please let me know.