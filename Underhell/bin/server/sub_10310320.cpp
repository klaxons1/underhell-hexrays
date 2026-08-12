void __thiscall sub_10310320(float *this, int *a2, char *String1)
{
  _DWORD *v4; // eax
  int v5; // edi
  int *v6; // ecx
  int v7; // eax

  if ( a2 )
  {
    v4 = sub_10243040("sprites/grubflare1.vmt", this + 179, 0);
    *a2 = (int)v4;
    if ( v4 )
    {
      sub_10242BA0((int)v4);
      sub_10128950(*a2, 9, 156, 169, 121, 164, 14);
      sub_102428B0(*a2, 1.0, 0.0);
      v5 = *a2;
      if ( *(_DWORD *)(*a2 + 840) != COERCE_INT(16.0) )
      {
        if ( *(_BYTE *)(v5 + 84) )
        {
          *(_BYTE *)(v5 + 88) |= 1u;
        }
        else
        {
          v6 = *(int **)(v5 + 24);
          if ( v6 )
            sub_100194B0(v6, 840);
        }
        *(float *)(v5 + 840) = 16.0;
      }
      v7 = sub_100BEF30((int)this, String1);
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)*a2 + 140))(*a2, this, v7);
      sub_100E10C0(*a2, &flt_106F1CA8);
      sub_100EC3F0((_DWORD *)*a2, 0, 0.0, 0);
      sub_100EC4A0((int *)*a2, -1.0, 0);
    }
  }
}
