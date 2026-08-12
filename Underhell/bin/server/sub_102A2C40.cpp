char __thiscall sub_102A2C40(int this)
{
  char result; // al
  int v3; // ecx
  int (__thiscall *v4)(int, int); // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  float v8[3]; // [esp+4h] [ebp-24h] BYREF
  float v9[3]; // [esp+10h] [ebp-18h] BYREF
  float v10; // [esp+1Ch] [ebp-Ch] BYREF
  float v11; // [esp+20h] [ebp-8h]
  float v12; // [esp+24h] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 204) )
    return 1;
  if ( *(_DWORD *)(this + 68) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != *(_DWORD *)(this + 68) >> 12 )
  {
    v3 = 0;
  }
  else
  {
    v3 = off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
  }
  if ( sub_10050E90((float *)(this + 168), v3) )
  {
    v4 = *(int (__thiscall **)(int, int))(*(_DWORD *)this + 336);
    *(float *)(this + 204) = *(float *)(dword_106B31C8 + 12) + 1.0;
    v5 = v4(this, 1);
    if ( v5 != -1
      && (sub_102A11F0((_DWORD *)this, v5), sub_1029F780((_DWORD *)this, *(_DWORD *)(this + 112), &v10, v8))
      && (v6 = sub_1026A890((unsigned int *)(this + 68)),
          (*(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 536))(v6, v9),
          v7 = *(_DWORD *)(this + 4),
          v10 = v9[0] + v10,
          v11 = v9[1] + v11,
          v12 = v9[2] + v12,
          sub_100846B0(*(void **)(v7 + 2588), (int *)&v10)) )
    {
      sub_1007DF50((int)v8);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    result = 1;
    *(float *)(this + 204) = *(float *)(dword_106B31C8 + 12) + 0.5;
  }
  return result;
}
