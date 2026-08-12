_DWORD *__stdcall sub_100F0F70(_DWORD *a1, int a2)
{
  float v3[3]; // [esp+0h] [ebp-18h] BYREF
  float v4; // [esp+Ch] [ebp-Ch] BYREF
  float v5; // [esp+10h] [ebp-8h]
  float v6; // [esp+14h] [ebp-4h]

  if ( !a2 )
    Error("InitSingleton: pEmitter is NULL");
  sub_100EB860((_DWORD *)(a2 + 8), 0);
  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  sub_100F3060(&v4);
  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  v3[0] = 0.0;
  v3[1] = 0.0;
  v3[2] = 0.0;
  sub_100EC3F0(a2 + 8, v3, &v4, 1);
  *a1 = 0;
  if ( a2 )
  {
    sub_100F2950(a2);
    if ( *a1 )
      sub_100F2FF0(*a1);
    *a1 = a2;
    sub_100F2FF0(a2);
  }
  return a1;
}
