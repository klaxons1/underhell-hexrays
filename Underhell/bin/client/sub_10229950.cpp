int __thiscall sub_10229950(int this, const char *a2)
{
  int i; // edi
  int v4; // eax
  int v5; // eax
  int v7; // [esp-4h] [ebp-10h]
  int v8; // [esp-4h] [ebp-10h]

  Warning("KeyValues Error: %s in file %s\n", a2, *(const char **)(this + 256));
  for ( i = 0; i < *(_DWORD *)(this + 264); ++i )
  {
    if ( *(_DWORD *)(this + 4 * i) != -1 )
    {
      if ( i >= *(_DWORD *)(this + 260) )
      {
        v5 = KeyValuesSystem();
        v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 16))(v5, *(_DWORD *)(this + 4 * i));
        Warning("(*%s*), ", v8);
      }
      else
      {
        v4 = KeyValuesSystem();
        v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 16))(v4, *(_DWORD *)(this + 4 * i));
        Warning("%s, ", v7);
      }
    }
  }
  return Warning("\n");
}
