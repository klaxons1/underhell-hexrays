void __thiscall sub_100F4A70(int this)
{
  double v2; // st7
  double v3; // st7
  int v4; // edx
  _DWORD *v5; // eax
  int v6; // eax
  char Buffer[256]; // [esp+4h] [ebp-104h] BYREF
  int v8; // [esp+104h] [ebp-4h]

  if ( *(_BYTE *)(this + 24) && *(float *)off_103DC81C >= (double)*(float *)(this + 32) )
  {
    v2 = *(float *)off_103DC81C;
    if ( *(_BYTE *)(this + 45) )
    {
      *(float *)(this + 32) = v2 + 2.0;
      *(float *)(this + 36) = *(float *)off_103DC81C;
      *(_DWORD *)(this + 40) = *((_DWORD *)off_103DC81C + 1);
      *(_BYTE *)(this + 45) = 0;
    }
    else
    {
      v3 = v2 - *(float *)(this + 36);
      if ( 0.0 == v3 )
        v3 = 1.0;
      v4 = *(_DWORD *)(this + 4);
      v8 = *((_DWORD *)off_103DC81C + 1) - *(_DWORD *)(this + 40);
      *(float *)(v4 + 24 * *(_DWORD *)(this + 28) + 20) = (double)v8 / v3;
      v5 = (_DWORD *)(*(_DWORD *)(this + 4) + 24 * *(_DWORD *)(this + 28));
      *(float *)(this + 32) = *(float *)off_103DC81C + 1.5;
      *(_BYTE *)(this + 45) = 1;
      if ( *v5 )
      {
        sub_10228370(Buffer, 0xFFu, "%s %s\n", *v5);
        (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_1041315C + 396))(dword_1041315C, Buffer);
      }
      v6 = ++*(_DWORD *)(this + 28);
      if ( v6 == *(_DWORD *)(this + 16) )
      {
        sub_100F4A20((_BYTE *)this);
      }
      else
      {
        sub_10228370(Buffer, 0xFFu, "%s %s\n", *(_DWORD *)(*(_DWORD *)(this + 4) + 24 * v6));
        (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_1041315C + 396))(dword_1041315C, Buffer);
      }
    }
  }
}
