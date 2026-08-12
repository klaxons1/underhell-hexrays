void __thiscall sub_103CE720(int this, _DWORD *a2)
{
  bool v3; // zf
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  char v8; // al
  int v9; // edx
  float *v10; // eax

  switch ( *a2 )
  {
    case 0x9C:
      if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 4) != 2 )
        goto LABEL_7;
      sub_10039F40((int *)this, dword_106EC79C);
      break;
    case 0x9D:
      if ( (unsigned __int8)sub_103E0CF0(0) )
        *(float *)(*(_DWORD *)(this + 2604) + 20) = *(float *)(this + 3840);
LABEL_7:
      sub_10027CD0((_DWORD *)this, 0);
      break;
    case 0x9E:
      sub_10050BE0((float *)(this + 3844));
      v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 3) == 1;
      v4 = 64;
      if ( !v3 )
        v4 = dword_106EC798;
      sub_10039F40((int *)this, v4);
      break;
    case 0x9F:
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v6 = *(_DWORD *)this;
      if ( v5 )
      {
        v7 = (*(int (__thiscall **)(int))(v6 + 368))(this);
        v8 = sub_10081B40(*(_DWORD **)(this + 2588), v7 + 716, 0.0, 0.0);
        v9 = *(_DWORD *)this;
        if ( v8 )
        {
          v10 = (float *)(*(int (__thiscall **)(int))(v9 + 368))(this);
          *(float *)(this + 3864) = v10[179];
          *(float *)(this + 3868) = v10[180];
          *(float *)(this + 3872) = v10[181];
          sub_10027CD0((_DWORD *)this, 0);
        }
        else
        {
          (*(void (__thiscall **)(int, int))(v9 + 1312))(this, 11);
        }
      }
      else
      {
        (*(void (__thiscall **)(int, int))(v6 + 1312))(this, 6);
      }
      break;
    default:
      sub_10332690(this, (int)a2);
      break;
  }
}
