# Understanding COM

To truly understand ActiveX, OLE you must understand the foundation. That foundation is COM.
And at the heart of COM is the interface **IUnknown** having the following member functions:

- QueryInterface
- AddRef
- Release

While today COM is fading in sight because of dotNET, the principles behind it is eternal. 
Although COM protocol was intended to be language agnostic, however its implementation finds
its greatest expression in C++. 

This project have carefully crafted commits in order to meticulously examined in accurate 
detail what is happening in every step of the way. The changes in the **IDL** as methods,
properties and events gets added and its corresponding changes in the C++ source code to
scaffold what is expressed in **IDL**. Eventually, we put implementation body. 

Every git commit here is patterned in every relevant steps as documentid in: https://www.codeproject.com/Articles/505791/Writing-Simple-COM-ATL-DLL-for-VS2012

You can diff every commit to clearly see what has changed every step of the way. 

As there is currently a nasty COM/ATL bug in the latest VS2017, this project is using the older VS2010. 
Doing COM is a delicate process, and do not fool yourself trying to understand COM by cut & paste
or GUI clicking. 

I have seen a lot of books trying to explain COM. However, I seriously believe that there is only 1 
true book that explains it very clearly: * Developer's Workshop to COM and ATL 3.0 * by Andrew Troelsen.


