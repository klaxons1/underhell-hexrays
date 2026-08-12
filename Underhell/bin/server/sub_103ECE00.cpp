char __thiscall sub_103ECE00(int this)
{
  int v2; // eax
  _BYTE *v3; // ecx
  float *v4; // edi
  float *v5; // ebx
  bool v6; // zf
  char v7; // dl
  char v8; // cl
  int v10; // [esp+14h] [ebp-8h]
  _BYTE *v11; // [esp+18h] [ebp-4h]

  v2 = (**(int (__thiscall ***)(int))(this + 1484))(this + 1484);
  if ( v2 )
  {
    if ( sub_103EC430(this) )
    {
      v3 = (_BYTE *)(this + 1848);
      v11 = (_BYTE *)(this + 1848);
      v4 = (float *)(this + 1852);
      v5 = (float *)(this + 1900);
      v10 = 4;
      do
      {
        if ( *(v3 - 4) != *v3 )
        {
          sub_103EA9C0(v4);
          sub_103EAA70((_BYTE *)this, v4);
          v3 = v11;
        }
        if ( *(v3 - 4) && *v3 && *(float *)(dword_106B31C8 + 12) > (double)*v5 )
        {
          *v5 = RandomFloat(0.1, 0.30000001) + *(float *)(dword_106B31C8 + 12);
          sub_103EAA70((_BYTE *)this, v4);
          v3 = v11;
        }
        ++v3;
        ++v5;
        v4 += 3;
        v6 = v10-- == 1;
        v11 = v3;
      }
      while ( !v6 );
    }
    v7 = *(_BYTE *)(this + 1845);
    LOBYTE(v2) = *(_BYTE *)(this + 1846);
    *(_BYTE *)(this + 1848) = *(_BYTE *)(this + 1844);
    v8 = *(_BYTE *)(this + 1847);
    *(_BYTE *)(this + 1849) = v7;
    *(_BYTE *)(this + 1850) = v2;
    *(_BYTE *)(this + 1851) = v8;
  }
  return v2;
}
