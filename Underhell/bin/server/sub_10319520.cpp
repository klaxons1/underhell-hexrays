void __thiscall sub_10319520(int *this, int a2)
{
  _BYTE *v3; // edi
  int (__thiscall *v4)(int *); // edx
  float *v5; // eax
  float v6; // [esp+4h] [ebp-78h]
  _DWORD v7[20]; // [esp+1Ch] [ebp-60h] BYREF
  int v8[3]; // [esp+6Ch] [ebp-10h] BYREF
  int v9; // [esp+78h] [ebp-4h]

  v3 = this + 56;
  if ( *((_BYTE *)this + 224) )
  {
    (*(void (__thiscall **)(int *, int *))(*this + 472))(this, this + 56);
    *v3 = 0;
  }
  v4 = *(int (__thiscall **)(int *))(*this + 448);
  *(float *)v8 = 0.0;
  *(float *)&v8[1] = 0.0;
  *(float *)&v8[2] = 1.0;
  v9 = v4(this);
  v6 = (float)v9;
  v5 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
  sub_102487B0((int)v7, (int)this, (int)this, (float *)v8, v5, v6, 21, 0, 0);
  sub_100D9E70(this, (int)this, v7);
}
