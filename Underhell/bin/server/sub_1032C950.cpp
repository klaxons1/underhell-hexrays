void __thiscall sub_1032C950(void *this, float a2, float a3)
{
  float *v4; // eax
  _BYTE v5[12]; // [esp+14h] [ebp-Ch] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC) )
  {
    v4 = (float *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 504))(this, v5);
    sub_1023D4B0(1, v4, (int)a2, a3, (int)this, 8, 0);
  }
}
