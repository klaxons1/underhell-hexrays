void __usercall sub_10406F50(int a1@<ecx>, int a2@<edi>)
{
  float v3; // eax
  int v4; // edx
  float v5; // [esp+14h] [ebp-34h]
  float v6[3]; // [esp+24h] [ebp-24h] BYREF
  float v7[3]; // [esp+30h] [ebp-18h] BYREF
  float v8; // [esp+3Ch] [ebp-Ch] BYREF
  float v9; // [esp+40h] [ebp-8h]
  int v10; // [esp+44h] [ebp-4h]
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(a1 + 2112) )
  {
    if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 2116) && *(_BYTE *)(a1 + 224) != 1 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 472))(a1, a1 + 224);
      *(_BYTE *)(a1 + 224) = 1;
    }
    v3 = *(float *)(a1 + 728);
    v4 = *(_DWORD *)(a1 + 736);
    v9 = *(float *)(a1 + 732);
    v10 = v4;
    v8 = v3;
    v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -20.0,
           20.0)
       + v9;
    v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -1.0,
           8.0)
       + v8;
    sub_100E11A0(a1, &v8);
    sub_10422220(a1 + 728, v7);
    v6[0] = v7[0] * 1000.0;
    v6[1] = v7[1] * 1000.0;
    v6[2] = 1000.0 * v7[2];
    sub_100DD660(a1, v6);
    v5 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
    sub_100EC4A0((int *)a1, v5, 0);
  }
  else
  {
    sub_10406170((float *)a1, (int)&savedregs, a2, a1);
  }
}
