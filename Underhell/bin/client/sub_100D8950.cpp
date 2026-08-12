int __thiscall sub_100D8950(void *this, int a2, int a3)
{
  int (__thiscall *v3)(void *, int); // eax
  int v4; // eax
  _DWORD v6[10]; // [esp+0h] [ebp-54h] BYREF
  char v7; // [esp+28h] [ebp-2Ch]
  int v8; // [esp+2Ch] [ebp-28h]
  int v9; // [esp+30h] [ebp-24h]
  int v10; // [esp+34h] [ebp-20h]
  __int16 v11; // [esp+38h] [ebp-1Ch]
  __int16 v12; // [esp+3Ah] [ebp-1Ah]
  char v13; // [esp+3Ch] [ebp-18h]
  _DWORD v14[5]; // [esp+40h] [ebp-14h] BYREF

  *(float *)&v6[3] = 0.0;
  *(float *)&v6[4] = 0.0;
  memset(v14, 0, sizeof(v14));
  *(float *)&v6[5] = 0.0;
  *(float *)&v6[6] = 0.0;
  *(float *)&v6[7] = 0.0;
  v6[1] = 0;
  *(float *)&v6[8] = 0.0;
  v6[2] = 0;
  v6[9] = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v13 = 0;
  v3 = *(int (__thiscall **)(void *, int))(*(_DWORD *)this + 56);
  v11 = 0;
  v12 = 0;
  v6[0] = &CUserCmd::`vftable';
  v4 = v3(this, a3);
  sub_1012A270(a2, v4, v6);
  v6[0] = &CUserCmd::`vftable';
  return sub_1011A810(v14);
}
