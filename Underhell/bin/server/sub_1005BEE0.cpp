int __thiscall sub_1005BEE0(char **this)
{
  int v2; // eax
  char *v3; // edi
  double v4; // st7
  char *v5; // edi
  char *v6; // ebx
  int result; // eax
  int (__thiscall *v8)(int, char *); // edx
  int v9; // esi
  float *v10; // eax
  char v11[76]; // [esp+28h] [ebp-84h] BYREF
  int v12; // [esp+74h] [ebp-38h]
  char v13[12]; // [esp+7Ch] [ebp-30h] BYREF
  float v14[3]; // [esp+88h] [ebp-24h] BYREF
  int v15[3]; // [esp+94h] [ebp-18h] BYREF
  float v16; // [esp+A0h] [ebp-Ch] BYREF
  float v17; // [esp+A4h] [ebp-8h]
  float v18; // [esp+A8h] [ebp-4h]

  (*((void (__thiscall **)(char **))*this + 13))(this);
  v2 = sub_1007DB30(100000);
  sub_10023CB0(this[1], v2);
  v3 = this[1];
  if ( (*((_DWORD *)v3 + 63) & 0x800) != 0 )
    sub_100DAE60(this[1]);
  this[6] = *((char **)v3 + 145);
  this[7] = *((char **)v3 + 146);
  v4 = *((float *)v3 + 147);
  v5 = this[1];
  *((float *)this + 8) = v4;
  if ( (*((_DWORD *)v5 + 63) & 0x800) != 0 )
    sub_100DAE60(v5);
  v6 = this[1];
  v16 = *((float *)v5 + 145);
  v17 = *((float *)v5 + 146);
  v18 = *((float *)v5 + 147) - 4096.0;
  if ( (*((_DWORD *)v6 + 63) & 0x800) != 0 )
    sub_100DAE60(v6);
  result = sub_10265A60(this[1], v6 + 580, &v16, 1174421507, v5, 0, v11);
  if ( v12 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 284))(v12);
    if ( (_BYTE)result )
    {
      (*(void (__thiscall **)(char *, float *, _DWORD, _DWORD))(*(_DWORD *)this[1] + 528))(this[1], v14, 0, 0);
      v8 = *(int (__thiscall **)(int, char *))(*(_DWORD *)v12 + 516);
      v9 = (int)this[1];
      v16 = v14[0] * 12.0;
      v17 = v14[1] * 12.0;
      v18 = 12.0 * v14[2];
      v10 = (float *)v8(v12, v13);
      *(float *)v15 = *v10 - v16;
      *(float *)&v15[1] = v10[1] - v17;
      *(float *)&v15[2] = v10[2] - v18;
      return sub_1023D4B0(8, (int)v15, 32, 0.2, v9, 0, 0);
    }
  }
  return result;
}
