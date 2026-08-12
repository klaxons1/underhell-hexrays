char __thiscall sub_10258220(int this, char a2, char a3, float a4)
{
  char result; // al
  int v6; // ebx
  int v7; // edi
  int v8; // [esp+Ch] [ebp-Ch]
  double v9; // [esp+10h] [ebp-8h]

  result = a2;
  *(_BYTE *)(this + 218) = a2;
  if ( !a2 )
  {
    result = 1;
    v8 = 1;
    if ( *(int *)(this + 276) > 1 )
    {
      v6 = 32;
      do
      {
        if ( a3 != 1
          || (v9 = *(float *)(*(_DWORD *)(this + 264) + v6 + 12),
              ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1047CA80 + 20))(dword_1047CA80) > v9) )
        {
          if ( -1.0 == a4 )
            a4 = *(float *)(*(_DWORD *)(this + 264) + v6 + 20);
          v7 = v6 + *(_DWORD *)(this + 264);
          *(float *)(v7 + 12) = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1047CA80 + 20))(dword_1047CA80)
                              + a4;
        }
        result = v8 + 1;
        v6 += 32;
        ++v8;
      }
      while ( v8 < *(_DWORD *)(this + 276) );
    }
  }
  return result;
}
