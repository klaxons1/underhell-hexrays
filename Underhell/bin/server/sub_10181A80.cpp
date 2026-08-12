void __cdecl sub_10181A80(int NumOfElements, _DWORD *Base, char a3)
{
  _DWORD *v3; // esi
  int v4; // edi

  v3 = Base;
  sub_10181600(NumOfElements, (int)Base);
  sub_101816D0(NumOfElements, Base);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0) && NumOfElements > 0 )
  {
    v4 = NumOfElements;
    do
    {
      if ( *v3 )
        sub_10273D90(*v3);
      v3 += 4;
      --v4;
    }
    while ( v4 );
    v3 = Base;
  }
  sub_10181980(NumOfElements, (int)v3);
  sub_10181820(NumOfElements, (int)v3, a3);
}
