print("ENTER THE NUMBER OF ELEMENTS>>>\n");
$n=<STDIN>;
chomp $n;
print("ENTER THE ELEMENTS>>>\n");
for($i=0;$i<$n;$i++)
{
	$c=<STDIN>;
	chomp $c;
	push @list,$c;
}
print("LIST ENTERED>>>>\n");
print(@list,"\n");
for($i=0;$i<$n;$i++)
{	for($j=0;$j<$n-$i-1;$j++)
	{	if(@list[$j] > @list[$j+1])
		{	$temp=@list[$j];
			@list[$j]=@list[$j+1];
		        @list[$j+1]=$temp;
		}
	}
}
print("SORTED LIST IS>>>>\n");
print(@list,"\n");