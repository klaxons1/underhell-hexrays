_DWORD *__thiscall sub_101FE8C0(int this, int a2)
{
  double v3; // st7
  _DWORD *result; // eax
  int i; // ebx
  int (__thiscall *v6)(int); // eax
  int v7; // edi
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int *v12; // eax
  float v13; // [esp+8h] [ebp-20h]
  float v14; // [esp+Ch] [ebp-1Ch]
  float v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-Ch] BYREF
  int v17; // [esp+24h] [ebp-4h]

  v3 = *(float *)(this + 800);
  v15 = *(float *)(this + 800);
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    v3 = 16384.0;
    v15 = 16384.0;
  }
  v13 = v3;
  result = sub_1012C480(0, "player", (float *)(this + 716), v13, 0);
  for ( i = (int)result; result; i = (int)result )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 320))(i) )
    {
      v6 = *(int (__thiscall **)(int))(*(_DWORD *)i + 8);
      v7 = i;
      v17 = i;
      v16 = *(_DWORD *)v6(i);
    }
    else
    {
      v17 = 0;
      v7 = 0;
      v16 = -1;
    }
    if ( sub_10319100(&v16) == -1 )
    {
      if ( v7 )
        v16 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
      else
        v16 = -1;
      v8 = *(_DWORD *)(this + 828);
      v9 = *(_DWORD *)(this + 820);
      if ( v8 + 1 > v9 )
        sub_102ABFC0(v8 - v9 + 1);
      ++*(_DWORD *)(this + 828);
      v10 = *(_DWORD *)(this + 816);
      v11 = *(_DWORD *)(this + 828) - v8 - 1;
      *(_DWORD *)(this + 832) = v10;
      if ( v11 > 0 )
        memcpy((void *)(v10 + 4 * v8 + 4), (const void *)(v10 + 4 * v8), 4 * v11);
      v12 = (int *)(*(_DWORD *)(this + 816) + 4 * v8);
      if ( v12 )
        *v12 = v16;
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_101EE770(
        v17,
        this,
        (float *)(this + 580),
        *(float *)(this + 800),
        *(float *)(this + 804),
        *(float *)(this + 808));
    }
    result = sub_1012C480(i, "player", (float *)(this + 716), v15, 0);
  }
  if ( *(_DWORD *)(this + 828) )
  {
    sub_100EC3F0((_DWORD *)this, (int)sub_101FE690, 0.0, 0);
    v14 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return (_DWORD *)sub_100EC4A0((int *)this, v14, 0);
  }
  return result;
}
