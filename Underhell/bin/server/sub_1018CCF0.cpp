void __userpurge sub_1018CCF0(int a1@<ecx>, int a2@<esi>, int a3)
{
  float v4; // eax
  float v5; // ecx
  bool v6; // al
  int v7; // esi
  _BYTE v8[55]; // [esp+4h] [ebp-78h] BYREF
  char v9; // [esp+3Bh] [ebp-41h]
  float v10[3]; // [esp+58h] [ebp-24h] BYREF
  float v11[3]; // [esp+64h] [ebp-18h] BYREF
  float v12[2]; // [esp+70h] [ebp-Ch] BYREF
  float v13; // [esp+78h] [ebp-4h]
  int savedregs; // [esp+7Ch] [ebp+0h] BYREF

  if ( !*(_BYTE *)(a1 + 48) )
  {
    v4 = *(float *)(a1 + 28);
    v5 = *(float *)(a1 + 32);
    v13 = *(float *)(a1 + 36);
    v12[0] = v4;
    v13 = v13 - 58.0;
    v12[1] = v5;
    v10[0] = -12.5;
    v10[1] = -12.5;
    v10[2] = 0.0;
    v11[0] = 12.5;
    v11[1] = 12.5;
    v11[2] = 68.0;
    sub_100231A0((int)&savedregs, a2, v12, v12, v10, v11, 81931, a3, 8, (int)v8);
    v6 = v9 == 0;
    *(_BYTE *)(a1 + 48) = v9 == 0;
    if ( v6 )
    {
      v7 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
             dword_106B31F8,
             "nav_blocked",
             0);
      if ( v7 )
      {
        (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v7 + 40))(v7, "area", *(_DWORD *)a1);
        (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v7 + 40))(
          v7,
          "blocked",
          *(unsigned __int8 *)(a1 + 48));
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v7, 0);
      }
    }
  }
}
