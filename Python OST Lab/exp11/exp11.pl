open MFILE,">sample.txt";
print MFILE "australia\n","africa\n","harsh\n","abc\n";
close MFILE;
open MFILE,">>sample.txt";
print MFILE "This is SFIT\n";
close MFILE;
open MFILE,"sample.txt";
@list1=<MFILE>;
print("THE TEXT IN YOUR FILE IS>>>>>>\n");
print @list1;
print("THE WORDS WHICH HAS SAME FIRST AND LAST LETTER>>>\n");
foreach $x(@list1)
{
	@list2=$x=~/\b([a-zA-Z])([a-zA-Z]*)(\1)/;
	print @list2,"\n";
}
close MFILE;
