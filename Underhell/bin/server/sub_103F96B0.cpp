void __thiscall sub_103F96B0(int this)
{
  void *v2; // edi
  void (__thiscall *v3)(int, int); // edx
  float v4; // [esp+4h] [ebp-4h] BYREF

  if ( !*(_BYTE *)(this + 1392) )
  {
    if ( sub_100D1940((_DWORD *)this) )
    {
      v2 = (void *)sub_100D1940((_DWORD *)this);
      if ( v2 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)v2 + 320))(v2) )
        {
          v3 = *(void (__thiscall **)(int, int))(*(_DWORD *)this + 944);
          *(_DWORD *)(this + 1396) = 1;
          v3(this, 177);
          v4 = 3.4028235e38;
          sub_100D2CB0((float *)(this + 1140), &v4);
          v4 = 3.4028235e38;
          sub_100D2D00((float *)(this + 1132), &v4);
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 972))(this) )
            sub_100CF400(v2, this);
        }
      }
    }
  }
}
