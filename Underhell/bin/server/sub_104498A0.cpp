int __cdecl sub_104498A0(int a1)
{
  int result; // eax
  int v2; // eax
  int v3; // esi
  int v4; // edi

  if ( !dword_10701898 )
    return 0;
  if ( a1 )
    v2 = ~(dword_107018C8 - 1) & (dword_107018C8 + a1 - 1);
  else
    v2 = dword_107018C8;
  v3 = dword_107018B4 + v2;
  v4 = dword_107018B4;
  if ( dword_107018B4 + v2 > (unsigned int)dword_107018B8 && !(unsigned __int8)sub_1044EAA0(dword_107018B4 + v2) )
    return 0;
  result = v4;
  dword_107018B4 = v3;
  return result;
}
