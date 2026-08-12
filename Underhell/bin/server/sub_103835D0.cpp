bool __thiscall sub_103835D0(void *this, int a2)
{
  int v2; // esi
  int v3; // ecx
  float v5[3]; // [esp+4h] [ebp-28h] BYREF
  float v6[3]; // [esp+10h] [ebp-1Ch] BYREF
  float v7; // [esp+1Ch] [ebp-10h] BYREF
  float v8; // [esp+20h] [ebp-Ch]
  float v9; // [esp+24h] [ebp-8h]
  float v10; // [esp+28h] [ebp-4h]

  v10 = *(float *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 576))(this) + 8);
  if ( a2
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2)
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 1088))(a2) )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1096))(a2) + 320;
    v7 = 0.0;
    v8 = 0.0;
    v9 = 1.0;
    sub_101117D0(v2, &v7, v5);
    v3 = v2;
  }
  else
  {
    v7 = 0.0;
    v8 = 0.0;
    v9 = 1.0;
    sub_101117D0(a2 + 320, &v7, v5);
    v3 = a2 + 320;
  }
  v7 = 0.0;
  v8 = 0.0;
  v9 = 0.0;
  sub_101117D0(v3, &v7, v6);
  return v10 > (double)v6[2] && v10 < (double)v5[2];
}
