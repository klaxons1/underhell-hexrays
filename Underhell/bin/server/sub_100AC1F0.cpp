void __thiscall sub_100AC1F0(int *this)
{
  int v2; // edi
  const char *v3; // eax
  float v4; // [esp+4h] [ebp-18h]
  int v5; // [esp+8h] [ebp-14h]
  int v6; // [esp+10h] [ebp-Ch]

  if ( this[3] != -1 )
  {
    if ( *(float *)(dword_106B31C8 + 12) <= (double)*((float *)this + 4) )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this[1] + 1604))(this[1], this[5]) )
        return;
      v2 = *(_DWORD *)(this[1] + 24);
      v6 = this[2];
      v5 = (*(int (__thiscall **)(int *))(*this + 20))(this);
      v4 = ((double (__thiscall *)(int *))*(_DWORD *)(*this + 16))(this);
      sub_10238F70(v2, this[3], v4, v5, 0, v6);
      v3 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 128))(dword_106B31D0, this[3]);
      sub_100AC150(this, "Speaking [from QUEUE]", v3);
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)this[1] + 1608))(this[5], 0.0);
    }
    this[3] = -1;
  }
}
