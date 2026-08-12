void __thiscall sub_1036E530(float *this)
{
  void (__thiscall *v2)(float *, int); // eax
  void (__thiscall *v3)(float *, int); // edx
  double v4; // [esp+14h] [ebp-8h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 264))(this)
    && sub_1007E040(*((_DWORD **)this + 647)) )
  {
    switch ( *((_DWORD *)this + 920) )
    {
      case 1:
        if ( this[216] < 1.0 )
        {
          v4 = 0.1;
          sub_1036C140(this + 216, &v4);
        }
        if ( this[216] >= 1.0 )
        {
          v4 = 1.0;
          sub_10045730(this + 216, &v4);
          *((_DWORD *)this + 920) = 4;
          this[922] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                        dword_106B31E4,
                        0.1,
                        1.0)
                    + *(float *)(dword_106B31C8 + 12);
        }
        break;
      case 2:
        if ( *((_DWORD *)this + 593) == 11 )
        {
          this[921] = this[200];
          v4 = 0.5;
          *((_DWORD *)this + 920) = 1;
          sub_10045730(this + 216, &v4);
        }
        break;
      case 3:
        v4 = 0.1;
        sub_1036C1A0(this + 216, &v4);
        if ( this[216] <= 0.5 )
        {
          v4 = 0.5;
          sub_10045730(this + 216, &v4);
          v2 = *(void (__thiscall **)(float *, int))(*(_DWORD *)this + 1416);
          *((_DWORD *)this + 920) = 5;
          v2(this, 1);
          sub_1007DD70(1);
          this[923] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                        dword_106B31E4,
                        0.2,
                        0.5)
                    + *(float *)(dword_106B31C8 + 12);
          this[921] = 0.0;
        }
        break;
      case 4:
        if ( this[922] < (double)*(float *)(dword_106B31C8 + 12) )
          *((_DWORD *)this + 920) = 3;
        break;
      case 5:
        if ( this[923] < (double)*(float *)(dword_106B31C8 + 12) )
        {
          v3 = *(void (__thiscall **)(float *, int))(*(_DWORD *)this + 1416);
          *((_DWORD *)this + 920) = 2;
          v3(this, 11);
          sub_1007DD70(11);
          this[923] = *(float *)(dword_106B31C8 + 12) - 1.0;
          this[921] = this[200];
        }
        break;
      default:
        Warning("BIG TIME HEADCRAB ERROR\n");
        break;
    }
    this[200] = this[921] * this[216];
    sub_1036DF20((int)this);
  }
  else
  {
    this[923] = *(float *)(dword_106B31C8 + 12) - 1.0;
    sub_1036DF20((int)this);
  }
}
