void __thiscall sub_101C8BE0(float *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  float *v8; // ebx
  int v9; // edi
  _DWORD v10[3]; // [esp+10h] [ebp-10h] BYREF
  _DWORD *v11; // [esp+1Ch] [ebp-4h]

  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v2 = *((_DWORD *)this + 146);
  *(float *)v10 = this[145];
  v3 = *((_DWORD *)this + 63);
  v11 = this + 145;
  v4 = *((_DWORD *)this + 147);
  v10[1] = v2;
  v10[2] = v4;
  if ( (v3 & 0x400000) != 0 )
    goto LABEL_9;
  if ( !sub_101C8780((int)this, -1, (void (__thiscall *)(_DWORD *))sub_103D79E0) )
    return;
  v5 = 0;
  if ( *((int *)this + 39) <= 0 )
  {
LABEL_9:
    sub_100DCB50(this, (int)v10);
    if ( *((_DWORD *)this + 106) )
    {
      v7 = (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 80) + 44))((_DWORD *)this + 80);
      if ( v7 != 2 && v7 )
      {
        if ( ((_DWORD)this[63] & 0x800) != 0 )
          sub_100DAE60((int)this);
        v8 = this + 176;
      }
      else
      {
        v8 = &flt_106F1CB4;
      }
      v9 = *((_DWORD *)this + 106);
      if ( ((_DWORD)this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      (*(void (__thiscall **)(int, _DWORD *, float *, int, _DWORD))(*(_DWORD *)v9 + 272))(
        v9,
        v11,
        v8,
        1,
        *(float *)(dword_106B31C8 + 16));
    }
  }
  else
  {
    v6 = 0;
    while ( sub_101C8780((int)this, v5, *(void (__thiscall **)(_DWORD *))(*((_DWORD *)this + 36) + v6)) )
    {
      ++v5;
      v6 += 16;
      if ( v5 >= *((_DWORD *)this + 39) )
        goto LABEL_9;
    }
  }
}
