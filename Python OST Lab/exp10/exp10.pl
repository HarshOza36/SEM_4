print("ENTER A STRING\n");
$n=<STDIN>;
chomp $n;
if($n eq "sunday" || $n eq "SUNDAY")
{
	print("53 SUNDAYS\n");
}
else
{
	print("52 SUNDAYS\n");
}