.. example documentation master file, created by
   sphinx-quickstart on Tue Jan  7 15:17:11 2020.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

Welcome to example's documentation!
===================================

here is my text


Generating documentation:
-------------------------
* Document your code via docstrings

* Install sphinx::

   pip3 install sphinx

* create a folder 'doc' in your source location and make that as your cwd

* execute and give inputs to the prompts(separate folder for ...: n, Project Name, Project Revision, etc)::

   sphinx-quickstart

* modify the generated file 'conf.py':

  * Add the following lines at the top of the file::

	import os
	import sys
	sys.path.insert(0, os.path.abspath('.'))
	sys.path.insert(0, os.path.abspath('../'))

  * Replace extensions[] with::

	extensions = ['sphinx.ext.autodoc',
				  'sphinx.ext.intersphinx',
				  'sphinx.ext.viewcode'
	]

  * Change html_theme parameter if you want(recommended is 'haiku')

* generate the rst files for all your source modules::

   sphinx-apidoc -o .\ ..\

* Edit 'index.rst' by adding 'modules' after the toctree::

   .. toctree::
   :maxdepth: 2
   :caption: Contents:

   modules


* Write your content into *index.rst* file which is in reStructuredText format(refer wikipedia, or google 'reStructuredText cheatsheet')

* Run::

   make clean
   make html

* First time you'll need to do everything, then you can just do last step when you update any rst files. But, if you add new python file, first time post addition/deletion of files, you'll need to run all the steps from generating rst files to make html. After this, you can just do last step.

* Open the html *_build/html/index.html*

* Dont forget to commit the whole of doc folder on to your branch



.. toctree::
   :maxdepth: 2
   :caption: Contents:

   modules


Indices and tables
==================

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`
