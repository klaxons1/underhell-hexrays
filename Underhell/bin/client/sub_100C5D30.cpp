char __cdecl sub_100C5D30(int a1)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)sub_100B4090(&dword_1042FB78, "CHudCloseCaption");
  if ( v1 )
    LOBYTE(v1) = sub_100C5870(v1, a1);
  return (char)v1;
}
