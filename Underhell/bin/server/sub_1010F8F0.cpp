void __cdecl sub_1010F8F0(char *Source)
{
  int v1; // esi

  v1 = sub_10153490();
  if ( v1 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v1 + 320))(v1) )
  {
    if ( *(float *)(dword_106B31C8 + 12) > *(float *)(v1 + 4224) + 0.66 )
    {
      sub_1010EDA0(*(_DWORD *)(v1 + 24), Source, 0);
      *(float *)(v1 + 4224) = *(float *)(dword_106B31C8 + 12);
    }
  }
  else
  {
    sub_1010EDA0(0, Source, 0);
  }
}
