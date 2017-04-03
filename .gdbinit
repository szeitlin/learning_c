define pxml
	p xmlElemDump(stdout, $arg0, xmlDocGetRoolElement($arg0))
end
document pxml

Print the tree of an already opened XML document, i.e. an xmlDocPtr, to the screen. 
e.g. given: 

xmlDocPtr doc = xmlParseFile(infile);

use: pxml doc
end

define phead
    set $ptr = $arg1
    plistdata $arg0
end
document phead
Print the first element of a list. e.g. given:
    Glist *datalist;
    g_list_add(datalist, "Hello");
view the list:
>gdb phead char datalist
>gdb pnext char
>gdb pnext char
This macro defines $ptr as the current point-to list struct,
and $pdata as the data in that element.
end

define pnext
    set $ptr = $ptr->next
    plistdata $arg0
end
document pnext
Call phead first to set $ptr.
This macro steps forward in the lists, then shows the value at the next element.
Give the type of list data as the only argument

This macro defines $ptr as the current point-to list struct,
and $pdata as the data in that element.
end

define plistdata
    if $ptr
        set $pdata = $ptr->data
    else
        set $pdata = 0
    end

    if $pdata
        p ($arg0*)$pdata
    else
        p "NULL"
    end
end
document plistdata
Thsi is intended to be used by phead and pnext.
It sets $pdata and prints its value.
end



