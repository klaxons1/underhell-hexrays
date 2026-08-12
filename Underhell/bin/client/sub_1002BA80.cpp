void __thiscall sub_1002BA80(int this)
{
  _DWORD *v2; // edi
  double v3; // st7
  double v4; // st7
  float v5; // [esp+4h] [ebp-4h]
  float v6; // [esp+4h] [ebp-4h]

  if ( !*(_BYTE *)(this + 1760) )
  {
    if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
      sub_10026520(this);
    v2 = *(_DWORD **)(this + 1940);
    if ( v2 && *v2 )
    {
      v3 = *((float *)off_103DC81C + 3) - *(float *)(this + 96);
      if ( v3 >= 0.2 )
        v3 = 0.2;
      if ( v3 > 0.001 )
      {
        v5 = v3;
        v4 = ((double (__thiscall *)(int, _DWORD *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 684))(
               this,
               v2,
               *(_DWORD *)(this + 1808))
           * v5
           * *(float *)(this + 1236)
           + *(float *)(this + 1816);
        v6 = v4;
        *(float *)(this + 96) = *((float *)off_103DC81C + 3);
        if ( v4 < 0.0 || v4 >= 1.0 )
        {
          if ( (sub_10008630((int)v2, *(_DWORD *)(this + 1808)) & 1) != 0 )
          {
            v4 = v6 - (double)(int)v6;
          }
          else
          {
            v4 = 0.0;
            if ( v6 >= 0.0 )
              v4 = 1.0;
          }
          *(_BYTE *)(this + 1332) = 1;
        }
        if ( v4 != *(float *)(this + 1816) )
        {
          *(float *)(this + 1816) = v4;
          sub_1000F6C0(this, 8);
        }
        *(float *)(this + 1324) = sub_100271C0((void *)this, v2, *(_DWORD *)(this + 1808));
      }
    }
  }
}
