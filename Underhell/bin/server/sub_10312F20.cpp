int __usercall sub_10312F20@<eax>(int a1@<edi>)
{
  const char **v1; // esi

  v1 = (const char **)off_1066C8C4;
  do
    sub_100E8220(a1, *v1++);
  while ( (int)v1 < (int)&off_1066C8D0 );
  sub_100E8220(a1, "models/gibs/helicopter_brokenpiece_04_cockpit.mdl");
  sub_100E8220(a1, "models/gibs/helicopter_brokenpiece_05_tailfan.mdl");
  return sub_100E8220(a1, "models/gibs/helicopter_brokenpiece_06_body.mdl");
}
