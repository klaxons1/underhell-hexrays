unsigned int __usercall sub_102D15F0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  unsigned int result; // eax
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  float v8; // [esp+0h] [ebp-84h]
  float v9[3]; // [esp+Ch] [ebp-78h] BYREF
  float v10[18]; // [esp+18h] [ebp-6Ch] BYREF
  float v11[3]; // [esp+60h] [ebp-24h] BYREF
  float v12[3]; // [esp+6Ch] [ebp-18h] BYREF
  float v13[3]; // [esp+78h] [ebp-Ch] BYREF
  int savedregs; // [esp+84h] [ebp+0h] BYREF

  v8 = *(float *)(dword_106B31C8 + 12) + 0.025;
  sub_100EC3F0((_DWORD *)a1, (int)sub_102D15F0, v8, off_10662E20);
  sub_102D11F0(a1, a2);
  result = *(_DWORD *)(a1 + 1420);
  if ( result != -1 )
  {
    result >>= 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 2] == result )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 1] )
      {
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 744))(a1, v13);
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        sub_104222B0(a1 + 704, v12, 0, 0);
        v11[0] = v12[0] * 1900.0 + v13[0];
        v11[1] = v12[1] * 1900.0 + v13[1];
        v11[2] = 1900.0 * v12[2] + v13[2];
        sub_1002A5F0((int)&savedregs, a1, v13, v11, 1174421507, a1, 0, (int)v9);
        v4 = *(_DWORD *)(a1 + 1420);
        if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 2] != v4 >> 12 )
          v5 = 0;
        else
          v5 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 1];
        sub_100E10C0(v5, v9);
        v6 = *(_DWORD *)(a1 + 1420);
        if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 2] != v6 >> 12 )
          v7 = 0;
        else
          v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 1];
        result = (unsigned int)sub_100F9FC0((float *)(v7 + 948), v10);
        if ( *(char *)(a1 + 248) >= 0 )
        {
          *(float *)(a1 + 1080) = v10[0];
          *(float *)(a1 + 1084) = v10[1];
          *(float *)(a1 + 1088) = v10[2];
        }
      }
    }
  }
  return result;
}
