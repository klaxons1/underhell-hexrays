int __thiscall sub_103B89D0(int *this)
{
  int v2; // edi
  int *v3; // ebx
  unsigned int v4; // eax
  int v5; // ecx
  float *v6; // eax
  int v7; // edx
  __int64 v8; // rax
  int v9; // edi
  char v11; // [esp+4Ch] [ebp-30h]
  float v12[3]; // [esp+58h] [ebp-24h] BYREF
  float v13[3]; // [esp+64h] [ebp-18h] BYREF
  float v14; // [esp+70h] [ebp-Ch] BYREF
  float v15; // [esp+74h] [ebp-8h]
  float v16; // [esp+78h] [ebp-4h]

  (*(void (__thiscall **)(int *))(*this + 100))(this);
  sub_1023C380(this, (int)"DoSpark", 0.0, 0);
  v2 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 5) + 20;
  v3 = this + 55;
  if ( this[55] != v2 )
  {
    (*(void (__thiscall **)(int *, int *))(*this + 464))(this, this + 55);
    *v3 = v2;
  }
  v4 = this[103];
  if ( v4 == -1 || off_1061BE18[4 * (this[103] & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (this[103] & 0xFFF) + 1];
  v6 = (float *)(*(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v5 + 504))(v5, v12, 0);
  sub_1025F370(this, v6, v11);
  v14 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 100.0);
  v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          100.0,
          400.0);
  v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.0,
          100.0);
  if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
    v14 = v14 * -1.0;
  if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
    v15 = v15 * -1.0;
  v13[0] = 0.0;
  v13[1] = 0.0;
  v13[2] = 0.0;
  v12[0] = 0.0;
  v12[1] = 0.0;
  v12[2] = 0.0;
  sub_1025F360(this, (int)v12, (int)v13);
  sub_100E0970((int)this, v7, 5, 0);
  sub_10112C00((int)(this + 80), 0);
  if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2) )
  {
    v8 = *v3;
    v9 = *v3 / 2;
    v14 = v14 * 2.0;
    v15 = v15 * 2.0;
    v16 = 2.0 * v16;
    if ( *v3 != v9 )
    {
      (*(void (__thiscall **)(int *, int *))(*this + 464))(this, this + 55);
      *v3 = v9;
    }
    sub_100E0970((int)this, SHIDWORD(v8), 4, 0);
  }
  sub_100DD660((int)this, &v14);
  sub_100EC3F0(this, (int)sub_103B7370, 0.0, 0);
  return sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
}
