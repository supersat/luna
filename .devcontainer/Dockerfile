# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.192.0/containers/python-3/.devcontainer/base.Dockerfile

# [Choice] Python version: 3, 3.9, 3.8, 3.7, 3.6
ARG PYTHON_VARIANT="3.9"
FROM mcr.microsoft.com/vscode/devcontainers/python:0-${PYTHON_VARIANT}

# [Choice] Node.js version: none, lts/*, 16, 14, 12, 10
ARG NODE_VERSION="none"
RUN if [ "${NODE_VERSION}" != "none" ]; then su vscode -c "umask 0002 && . /usr/local/share/nvm/nvm.sh && nvm install ${NODE_VERSION} 2>&1"; fi

ARG OSS_CAD_SUITE_URL="https://github.com/YosysHQ/oss-cad-suite-build/releases/download/2021-09-27/oss-cad-suite-linux-x64-20210927.tgz"
RUN curl -L ${OSS_CAD_SUITE_URL} | sudo tar xz --strip-components=1 -C /usr

ARG RISCV_TOOLCHAIN_URL="https://static.dev.sifive.com/dev-tools/freedom-tools/v2020.12/riscv64-unknown-elf-toolchain-10.2.0-2020.12.8-x86_64-linux-ubuntu14.tar.gz"
RUN curl -L ${RISCV_TOOLCHAIN_URL} | sudo tar xz --strip-components=1 -C /usr

RUN pip3 --disable-pip-version-check --no-cache-dir install poetry
