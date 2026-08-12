int __thiscall sub_103C1DA0(float *this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  double v7; // st7
  double v8; // st6
  unsigned __int8 (__thiscall *v9)(float *); // eax
  int v11; // [esp+14h] [ebp-50h] BYREF
  float v12; // [esp+18h] [ebp-4Ch]
  float v13; // [esp+1Ch] [ebp-48h]
  float v14; // [esp+20h] [ebp-44h]

  sub_1001E4E0(&v11, a2);
  v3 = *(_DWORD *)(a2 + 64);
  if ( (v3 & 0x84) == 0 )
  {
    if ( (v3 & 0x40) != 0 )
    {
      v7 = v12;
      v8 = 2.0;
    }
    else
    {
      if ( (v3 & 2) == 0 || (v3 & 0x20000000) != 0 )
        goto LABEL_14;
      v7 = v12;
      v8 = 2.5;
    }
    v12 = v7 * v8;
    v13 = v13 * v8;
    v14 = v8 * v14;
    goto LABEL_14;
  }
  v4 = *((_DWORD *)this + 954);
  v12 = v12 * 2.0;
  v13 = v13 * 2.0;
  v14 = v14 * 2.0;
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (v4 & 0xFFF) + 1];
    v6 = v4 >> 12;
    if ( v5[1] == v6 )
    {
      if ( *v5 )
      {
        if ( v5[1] == v6 )
          *(float *)(*v5 + 808) = *(float *)(dword_106B31C8 + 12) + 2.0;
        else
          MEMORY[0x328] = *(float *)(dword_106B31C8 + 12) + 2.0;
      }
    }
  }
LABEL_14:
  (*(void (__thiscall **)(float *, int *))(*(_DWORD *)this + 600))(this, &v11);
  v9 = *(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 264);
  this[937] = *(float *)(dword_106B31C8 + 12) + 5.0;
  if ( v9(this)
    && *((_BYTE *)this + 3735)
    && *((_BYTE *)this + 3732)
    && *((_DWORD *)this + 593) == dword_106EBC6C
    && !*((_BYTE *)this + 3737) )
  {
    sub_100EC3F0(this, (int)sub_103BFB90, 0.0, 0);
  }
  return sub_100C7DC0(this, a2, &v11);
}
