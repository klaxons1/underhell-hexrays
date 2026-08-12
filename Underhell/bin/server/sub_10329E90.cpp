void __thiscall sub_10329E90(int this, float a2)
{
  int *v3; // eax
  int v4; // ecx
  float v5; // [esp+4h] [ebp-20h]
  float v6; // [esp+8h] [ebp-1Ch]
  int v7[3]; // [esp+Ch] [ebp-18h] BYREF
  int v8[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) && a2 > 0.0 )
  {
    v3 = (int *)sub_100217F0((void *)this);
    v8[0] = *v3;
    v4 = *(_DWORD *)(this + 252);
    v8[1] = v3[1];
    v8[2] = v3[2];
    if ( (v4 & 0x800) != 0 )
      sub_100DAE60(this);
    v5 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)this + 2256))(this, *(float *)(this + 3824));
    sub_10329B60((_DWORD *)this, (int)v7, (float *)v8, (float *)(this + 580), v5, v6);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 2216))(this, LODWORD(a2));
  }
}
