void __thiscall sub_101E1C60(void *this, int a2, int a3, int a4)
{
  float *v4; // eax
  _BYTE v5[12]; // [esp+0h] [ebp-18h] BYREF
  float v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !a2 )
  {
    v4 = (float *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 504))(this, v5);
    v6[0] = *v4;
    v6[1] = v4[1];
    v6[2] = v4[2];
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_106B31D0 + 236))(dword_106B31D0, v6);
  }
}
