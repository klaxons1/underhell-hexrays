void __userpurge sub_10325F70(int *a1@<ecx>, const char *a2@<edi>, int *a3)
{
  int v3; // eax

  v3 = *a3;
  if ( *a3 == dword_106E5080 )
  {
    sub_101674F0(a2, a1, 1, 50.0, 1.0, (int)"models/gibs/hgibs_rib.mdl", 25.0);
  }
  else if ( v3 == dword_106E507C )
  {
    sub_10325810((int)a1);
  }
  else if ( v3 == dword_106E5078 )
  {
    sub_10325740(a1);
  }
  else
  {
    sub_1003AD70((int)a1, (int)a3);
  }
}
