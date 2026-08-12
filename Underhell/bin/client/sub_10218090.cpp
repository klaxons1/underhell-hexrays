int __thiscall sub_10218090(int this, int a2, int a3, int a4)
{
  int result; // eax
  int v6; // ecx
  int i; // ebx
  float *v8; // eax

  sub_101F98F0((float *)a2, *(_DWORD *)(this + 44));
  result = a2 + 24 * (*(_DWORD *)(this + 44) + 185);
  v6 = *(_DWORD *)(result + 8);
  if ( v6 )
  {
    if ( *(_DWORD *)(result + 12) == v6 )
    {
      for ( i = 0; i < *(_DWORD *)(a2 + 40); ++i )
      {
        v8 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * ((i & 3) + *(_DWORD *)(a2 + 6324) * (i / 4)));
        result = (*(int (__thiscall **)(_DWORD, int, _DWORD, float, float, float, _DWORD))(**((_DWORD **)off_103EE614
                                                                                            + 60)
                                                                                         + 32))(
                   *((_DWORD *)off_103EE614 + 60),
                   a2,
                   *(_DWORD *)(this + 44),
                   *v8,
                   v8[4],
                   v8[8],
                   *(unsigned __int8 *)(this + 48));
        if ( (_BYTE)result )
        {
          if ( !*(_BYTE *)(this + 49) )
            goto LABEL_8;
        }
        else if ( *(_BYTE *)(this + 49) )
        {
LABEL_8:
          result = *(_DWORD *)(a2 + 6664);
          *(_DWORD *)(*(_DWORD *)(a2 + 6668) + 4 * result) = i;
          ++*(_DWORD *)(a2 + 6664);
        }
      }
    }
  }
  return result;
}
