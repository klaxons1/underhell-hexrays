void __thiscall sub_10419BA0(_DWORD ***this, int a2)
{
  _DWORD ***v3; // edi
  int v4; // esi
  int v5; // ebx
  float v6; // [esp+4h] [ebp-10h]
  float v7; // [esp+Ch] [ebp-8h]

  if ( this[22] )
  {
    v6 = ((double (__thiscall *)(_DWORD **))**this[22])(this[22]);
    v3 = &this[5 * a2];
    v4 = (int)v3[7] - 1;
    if ( v4 >= 0 )
    {
      v5 = 10 * v4;
      do
      {
        v7 = *(float *)((char *)v3[4] + v5 + 4);
        if ( v7 < 0.0 || v7 > (double)v6 )
        {
          if ( (int)v3[7] - v4 - 1 > 0 )
            memcpy((char *)v3[4] + v5, (char *)v3[4] + v5 + 10, 10 * (_DWORD)((char *)v3[7] - v4 - 1));
          v3[7] = (_DWORD **)((char *)v3[7] - 1);
        }
        --v4;
        v5 -= 10;
      }
      while ( v4 >= 0 );
    }
  }
}
